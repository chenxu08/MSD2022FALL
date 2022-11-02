function make()
{
    document.write("<table ='1'>");
    document.write("<caption>Times Table</caption>")
    for (let i = 1; i <= 10; i++) {
        document.write("<tr>");
        for (let j = 1; j <= 10; j++) {

            document.write("<td onmouseover='under_mouse(this)' onmouseout='leave_mouse(this)' onclick='mouse_click(this)'>" + i + " * " + j + " = " + i * j + "</td>");
        }
        document.write("</tr>");
    }
    document.write("</table>");
}

function under_mouse(x){
    x.style.color="red";
}
function leave_mouse(x){
    x.style.color="black";

}

function mouse_click(x){


    x.style.backgroundColor="blue";


}


