"use strict";

let wsOpen = false;
function handleConnectCB(event){
    wsOpen=true;
}
function handleMessageFromWsCB(event){
    wsresultTA.value=event.data;
}

function handleAjaxSuccessCB(){
    resultTA.value = this.responseText;
}
function handleAjaxErrorCB(){

}
function handkp(event){

    if(event.type=="click" || event.keyCode == 13){
        let x = parseFloat(xTA.value);
        if(isNaN(x)){
            alert("please make sure");
            xTA.value = "<enter a number>";
            xTA.select();
            // event.preventDefault();
        return;}
        let y = parseFloat(yTA.value);
        if(isNaN(y)){
            alert("please make sure");
            yTA.value = "<enter a number>";
            yTA.select();

            return;}
        // resultTA.value=(x+y);

        let request = new XMLHttpRequest();
        request.open("GET","http://localhost:8080/calculate?x="+x+"&y="+y);
        request.addEventListener("error",handleAjaxErrorCB);
        request.addEventListener("load",handleAjaxSuccessCB);
        request.send();
        if(wsOpen){
        ws.send(x+" "+y);}else{
            wsresultTA.value="ws is not open";
        }


    }
}


let xTA=document.getElementById("xTA");
xTA.addEventListener("keypress",handkp);
let yTA=document.getElementById("yTA");
yTA.addEventListener("keypress",handkp);
let resultTA=document.getElementById("resultTA");
let wsresultTA=document.getElementById("wsresultTA");
let button = document.getElementById("bTA");
button.addEventListener("click",handkp);

let ws = new WebSocket("ws://localhost:8080");
ws.onopen = handleConnectCB;
ws.onmessage = handleMessageFromWsCB;