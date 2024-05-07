// const students = {
//     fullName : "Abhishek Raj ",
//     marks: 98.6,
//     age:24,
//     printMarks:function() {
//         console.log("marks=",this.marks);
//     },
//     printAge: function(){
//         console.log("age=",this.age);
//     },
// }; 

const employee={
    calcTax(){
        console.log("Tax rate is 10%");
    }
};
const karan={
    salary:50000,
};

karan.__proto__=employee;




// 

let Data ="hidden infromation";

class User {
 constructor(name,email){
    this.name=name;
    this.email=email;
 }

 viewData (){
console.log("data=",Data);
 }
}


class Admin extends User{
    constructor(name,email){
        super(name,email);
    }
    editData(){
       Data="changed";
     }
}

let s1= new User("abhi","abhi@gmail.com");
let s2= new User("siri","siri@gmail.com");
let t1= new User("avi","avi@gmail.com");
let admin=new Admin("raaa","raa@gmail.com");

