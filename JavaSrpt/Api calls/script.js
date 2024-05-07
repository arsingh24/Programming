const URL="https://cat-fact.herokuapp.com/facts";
const factPara= document.querySelector("#fact");
const btn=document.querySelector("#btn")


const getFacts= async()=>{
    console.log("getting data.....");
    let response = await fetch(URL);
    console.log("done for today",response.status);
    let data=await response.json();
    factPara.innerText=data[1].text;
    
}

btn.addEventListener("click",getFacts);