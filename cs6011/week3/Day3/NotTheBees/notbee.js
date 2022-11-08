"use strict";

let canvas = document.getElementsByTagName("canvas")[0];
let ctx = canvas.getContext("2d");

let cWidth = canvas.width;
let cHeight= canvas.height;
let bee1 , bee2, bee3, bee4, bee5;
let bees =[bee1,bee2,bee3,bee4,bee5];
for (let i= 0; i<bees.length;i++){
    bees[i]=new Image();
    bees[i].src="bee.png";
}


let myImg = new Image();
myImg.src="honey.png";
let xPos = Math.random()*1000;
let yPos = Math.random()*500;
let xPos2 = Math.random()*1000;
let yPos2= Math.random()*500;
function main(){



    // ctx.drawImage(myImg,20,20, 50,50);
    // window.requestAnimationFrame(handlemouse);
    // document.onmousemove = handlemouse;


        // animate();



}
window.onload = main;


// function animate(){
//     erase();
//
//     ctx.drawImage(bees[1],xPos,yPos, 50,50,);
//     xPos+=5;
//     ctx.drawImage(bees[0],xPos2,yPos2, 50,50,);
//     xPos2+=0.5;
//     // for (let i= 0; i<bees.length;i++){
//     //     erase();
//     //     let xps = i*50;
//     //     let yps = i*50;
//     //     ctx.drawImage(bees[i],xps,yps, 30,30);
//     //     xps+=5;
//     //     // window.requestAnimationFrame(animate);
//     // }
//
//
//     window.requestAnimationFrame(animate);

// }
function erase(){
    ctx.fillStyle="lightblue";
    ctx.fillRect(0,0,cWidth,cHeight);
}
function handlemouse(e){
    erase();
    ctx.drawImage(myImg,e.x,e.y, 50,50,);
    console.log("1");
    // ctx.drawImage(bees[1],xPos,yPos, 50,50,);
    // xPos+=5;
    // ctx.drawImage(bees[0],xPos2,yPos2, 50,50,);
    // xPos2+=0.5;
    // window.requestAnimationFrame(handlemouse);
}
document.onmousemove = handlemouse;
// myImg.addEventListener("mousemove",handlemouse);