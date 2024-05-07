function getData(dataId,getNextData){
    return new Promise((reslove , reject)=>{
        setTimeout(()=>{
            console.log("data",dataId);
            reslove("success");
            if(getNextData){
                getNextData();
            }
        },6000);
    });
}