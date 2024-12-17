let firstImg = document.getElementById("first");

firstImg.addEventListener("mouseover", funcForTask11);

function funcForTask11(){
    document.getElementById("fig").style.display = "flex";
    firstImg.style.display = "none";
}

firstImg.addEventListener("mouseout", funcForTask12);

function funcForTask12(){
    document.getElementById("fig").style.display = "none";
    firstImg.style.display = "flex";

}

let secondImg = document.getElementById("second");

secondImg.addEventListener("click", funcForTask21);

function funcForTask21(){
    document.getElementById("second").style.border = "10px solid red";
}

secondImg.addEventListener("dblclick", funcForTask22);

function funcForTask22(){
    document.getElementById("second").style.border = "none";
}

let thirdImg = document.getElementById("third");

thirdImg.addEventListener("mouseover", funcForTask31);
thirdImg.addEventListener("mouseout", funcForTask32);

function funcForTask31(){
    document.getElementById("third").src = "/images/gojo.webp";
}
function funcForTask32(){
    document.getElementById("third").src = "/images/gon.webp";
}