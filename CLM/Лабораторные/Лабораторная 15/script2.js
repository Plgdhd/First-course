
document.querySelector("#student-form").addEventListener("submit", function (event) {
    event.preventDefault(); 

    const form = event.target; 
    const footer = document.querySelector("footer");

    const name = form.querySelector("#name").value;
    const father = form.querySelector("#father").value;
    const surname = form.querySelector("#surname").value;
    const email = form.querySelector("#email").value;
    const number = form.querySelector("#number").value;

    const socials = Array.from(form.querySelectorAll("#checkers input:checked"))
        .map(checkbox => checkbox.parentNode.textContent.trim())
        .join(", ");

    const faculty = form.querySelector("#faculty").value;
    const course = form.querySelector("#course").value;
    const group = form.querySelector("#group").value;

    footer.innerHTML = `
        <br>Имя: ${name}
        <br>Отчество: ${father}
        <br>Фамилия: ${surname}
        <br>Email: ${email}
        <br>Номер телефона: ${number}
        <br>Социальные сети: ${socials || "Не выбрано"}
        <br>Факультет: ${faculty}
        <br>Курс: ${course}
        <br>Группа: ${group}
    `;
});

