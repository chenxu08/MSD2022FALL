let person = class{
    constructor(first,last) {
        this.first=first;
        this.last =last;
    }

}
let person1 =new person("Bill","Gates");
let person2 =new person("Mask","Gates");
let person3 =new person("Mask","Hill");
let myparray =[person1,person2,person3]
let myarray =[3,22,6,-9,10];
function comparetor(obj1,obj2){
    if(obj1.last > obj2.last){return true;}else{
        if (obj1.first > obj2.first){
            return true;}else{return false;}
    }
}

function compareto(x,y){
    if (x<y){return true;}else{return false;}
}
function findSmallestindex(array,iteration,comparetor){
    // let smallest = array[iteration];
    let smallestindex = iteration;
    for (let i= iteration+1; i<array.length;i++){
        let x = comparetor(array[i],array[smallestindex]);
        if (x){
            smallestindex=i;
        }
    }
    return smallestindex;
}
// array[i]<array[smallestindex]
function selectionsort(array){
    for(let i=0;i<array.length;i++){
        let sindex = findSmallestindex(array,i,comparetor);
        let temp = array[i];
        array[i]=array[sindex];
        array[sindex]=temp;
    }
}
for (let i=0; i<myparray.length; i++){
    console.log("data: "+ myparray[i].first+myparray[i].last);
}


selectionsort(myparray);
for (let i=0; i<myparray.length; i++){
    console.log("data: "+ myparray[i].first+myparray[i].last);
}