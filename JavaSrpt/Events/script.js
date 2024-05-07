let div=document.querySelector("div");

// div.onclick=()=>{
//     alert("thanks");
// }
// div.ondblclick=()=>{
//     alert("go far");
// }
// div.onclick=(evt)=>{
//     alert("thanks");
//     console.log(evt);
//     console.log(evt.type);
//     console.log(evt.target);
//     console.log(evt.clientX,evt.clientY);
// }

// div.addEventListener("click",(evt)=>{
//     alert("thanks");
//     console.log(evt);
//     console.log(evt.type);
//     console.log(evt.target);
//     console.log(evt.clientX,evt.clientY);
// })

let modeBtn=document.querySelector("#mode");
// console.log(modeBtn);
let currMode="dark";
let body=document.querySelector("body")
modeBtn.addEventListener("click",()=>{
    if(currMode==="dark"){
    console.log("dark");
    currMode="light";
    body.classList.add("dark");
    body.classList.remove("light");
    }
    else{
    console.log("light");
    currMode="dark";
    body.classList.add("light");
    body.classList.remove("dark");;
    }
})


