// let marks=[22,45,67,89,9];
// console.log("marks",marks);
// console.log("length:",marks.length);

// marks[4]=36;
// console.log("marks",marks);

//  let heroes=["ironman","thor","hulk","spiderman","shaktiman","marvel"];
// // // for(let i=0;i<heroes.length;i++){
// // //     console.log("heroes=",heroes[i]);
// // // }

// // for( let hero of heroes){
// //     console.log(hero);
// // }

//  let cities=["kolkata","mumbai","dehradun","patna","chakrata"];

//  for(let city of cities ){
//     console.log("city= ",city.toUpperCase());
//  }

//  let desh= cities + heroes;
//  console.log(desh);

// practice Q1
// let marks=[85,97,44,37,76,60];
// let sum =0;
// // for(let i=0;i<marks.length;i++){
// //     sum=sum+marks[i];
// // }
// for(let value of marks){
//     sum+=value;
// }
// console.log("total marks=", sum);
// let avg=sum/marks.length;
// console.log("average of students marks =", avg);
// console.log(`The average marks of students= ${avg}`);

// Q2
// let prices=[250,645,300,900,50];
//  let i=0;
//  for(let pr of prices){
//     let offer=pr/10;
//     prices[i]=prices[i]-offer;
//      console.log(prices[i]);
//      i++; 
//  }


// let offer=0;
// for(let i=0;i<prices.length;i++){
//      offer=prices[i]-prices[i] *10/100;
//     console.log(`prices after offer at the items ${offer}`);
//     prices[i]=offer;    
// }
// console.log(prices);


// ArrayMethods

// let foodItems=["chowmin","burger","sandwich","cornflakes"];
// console.log(`foodItems are ${foodItems}`);
// console.log("foodItems are",foodItems);
// foodItems.pop();
// console.log("foodItems are",foodItems);
// foodItems.push("roti","paneer","chai");
// console.log("foodItems are",foodItems);
// foodItems.unshift("maggi");
// console.log("foodItems are",foodItems);
// foodItems.shift();
// console.log("foodItems are",foodItems);

// let arr=[11,25,36,85,69,37];
// arr.splice(1,1);
// console.log("array are",arr);
// arr.splice(0,1,51);
// console.log("array are",arr);

let companies=["Bloomberg","Microsoft","Uber","Google","IBM","Netflix"];
companies.shift();
console.log("updated list of companies ",companies);
companies.splice(1,1,"Ola");
console.log("updated list of companies ",companies);
companies.push("Amazon");
console.log("updated list of companies ",companies);