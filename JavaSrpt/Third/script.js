//for loop
// for(let i=1;i<=100;i++){
//     console.log("Babuaan");
// }


// let sum=0;
// let n=prompt("enter the value of n");
//  for (let i=1;i<=n;i++){
//     sum=sum+i;
//  }
//  console.log("sum=",sum);


// for(let i=1;i<=5;i++){
//     console.log("i=",i);
// }

// while loop
// let i=1;
// while(i<=6){
//     console.log("i=",i);
//   i++;
// }

// do while
// let i=1;
// do{
//     console.log("i=",i);
//     i++;
// }while(i<=6);

// for of loop
// let str="Abhishek";
// let size=0;
// for(let i of str){
//     console.log("i=",i);
//     size++;
// }
// console.log("size=",size);

// for in loop
// let student=
// {
//     fullName : "Abhishek Raj Singh",
//     age : 24,
//     course : "BTech",
//     score: 8.9,
//     isPass: true,
// };
// for(let key in student){
//     console.log("key=",key, "  value=" ,student[key]);
// }

// practice 1
// let n=100;
// for(let i=0;i<=n;i++){
//     if(i%2!==0){
//         console.log("even=",i);
//     }
// }

//practice Q2

let gameNum=90;
let guess=prompt("guess the number:");
 while(gameNum!=guess){
    guess=prompt("you enter the wrong number, guess again:");
 }
 console.log("congrats you guess right");