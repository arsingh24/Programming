// function myFun(){
//    console.log("Namaste Duniya");
//    console.log("We're learning JS:)"); 
// }

// myFun();


// function sum(a, b){
//     console.log(a+b);
// }


// function sum(x,y){
//     s=x+y;
//     return s;
// }

// function mult(x,y){
//     s=x*y;
//     return s;
// }

// let arrowFun=(x,y) =>{
//     s=x+y;
//     return s;
// }

// let arrFun=(x,y)=> {
//     s=x*y;
//     return s;
// }


// function fun(str){
//    let count=0;
//    for(let char of str){
//     if(char==="a"||char==="e"||char==="i"||char==="o"||char==="u"){
//         count++;
//     }
//    }
//    console.log(count);
// }

// const arwFun=(str) => {
//     let count=0;
//    for(let char of str){
//     if(char==="a"||char==="e"||char==="i"||char==="o"||char==="u"){
//         count++;
//     }
//    }
//    console.log(count);
// }

/* forEach*/
// let arr=[1,2,3,4,5];
// arr.forEach((val) => {
//  console.log(val*val);
// })
/* map */
// let newArr= arr.map((val)=>{
//     return val*val*val;        
// }
// )
// console.log("nw=",newArr);

/*FIlter*/
// let ar=[1,2,3,4,5,6,7,8,9,10];
// let evenArr= ar.filter((val)=>{
//     return val%2==0;
// })
// console.log(" even   =",evenArr);

/*reduce */
// let arr=[1,2,3,4,5];
// const out=arr.reduce((res,curr)=>{
//     // return res+curr;
//     return res  < curr ? res:curr;
// }
// )
// console.log(" redeuced =",out);

/*Questions */

// let arr=[69,96,84,97,82,75,91];
// let res=arr.filter((val)=>{
//     return val>90;
// })
// console.log("topper= ",res);

let n=prompt("enter the value of n:");
let arr=[];
for(let i=1;i<=n;i++){
     arr[i-1]=i;
}
// console.log("res",arr);
let sum=arr.reduce((prev,curr)=>{
    return prev+curr;
})
console.log("sum of n num=",sum);
let prod=arr.reduce((prev,curr)=>{
    return prev*curr;
})
console.log("sum of n num=",prod);