

const botao = document.getElementById("btnsacar");
const campoValor = document.getElementById("valor");
const resultado = document.getElementById("resultado");

botao.addEventListener("click", function() {

    let saque = Number(campoValor.value);

    let notas100 = Math.floor(saque / 100);
    saque = saque % 100;

    let notas50 = Math.floor(saque / 50);
    saque = saque % 50;

    let notas20 = Math.floor(saque / 20);
    saque = saque % 20;

    let notas10 = Math.floor(saque / 10);
    saque = saque % 10;

    let notas5 = Math.floor(saque / 5);

    resultado.innerHTML = `

    
        <h3>SAQUE REALIZADO</h3>

        <p>Valor do saque: <strong>R$ ${campoValor.value},00</strong></p>

        <p>Notas entregues:</p>

        <p>${notas100} × R$ 100</p>
        <p>${notas50} × R$ 50</p>
        <p>${notas20} × R$ 20</p>
        <p>${notas10} × R$ 10</p>
        <p>${notas5} × R$ 5</p>
    `;

});