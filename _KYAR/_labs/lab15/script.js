const image1 = document.getElementById("img1");
const image3 = document.getElementById("img3");
const image4 = document.getElementById("img4");

img1.addEventListener("mouseover", () => {
  TextImage.innerHTML =
    " Барсело́на (кат. Barcelona [bəɾsəˈɫonə], исп. Barcelona [baɾθeˈlona]) — город в Испании, столица автономной области Каталония и провинции Барселона. Порт на Средиземном море в 120 км от границы Франции и в 504 км восточнее Мадрида.";
});
img1.addEventListener("mouseout", () =>{
    TextImage.innerHTML=' '
});
img2.addEventListener("click", () => {
    img2.style.border= '10px solid red'
});
img2.addEventListener("dblclick", () => {
    img2.style.border='none'
});
img4.addEventListener("mouseout", () =>{
    img4.src='photo/rome1.jpg'
});
img4.addEventListener("mouseover", () =>{
    img4.src='photo/flores.jpg'
});
submit1.addEventListener('click', () => {
    event.preventDefault()
    let surname = document.getElementById('surname').value
     let name = document.getElementById('name1').value
     let nomer = document.getElementById('nomer').value
     let number = document.getElementById('number').value
     let adres =document.getElementById('adres').value
   footerBlock.innerHTML = `<div>
        <p><b>Фамилия:</b>: ${surname} </p>
        <p><b>Имя</b>: ${name}</p>
        <p><b>Номер товара</b>: ${nomer}</p>
        <p><b>Количество товара:</b> ${number}</p>
        <p><b>Адрес:</b>${adres}</p>
   </div>`
})
// submit1.addEventListener('click', () => {
//     event.preventDefault()
//     let surname = document.getElementById('surname').value
//     let name = document.getElementById('name1').value
//     let nomer = document.getElementById('nomer').value
//     let number = document.getElementById('number').value
//     let radbut =document.getElementById('radbut').value
//    surnameF.innerHTML= surname
//    nameF.innerHTML=name
//    nomerF.innerHTML=nomer
//    numberF.innerHTML=number
//    radbutF.innerHTML=radbut
// });