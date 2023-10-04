// var nome = document.getElementById('nome')
// var resultado = document.getElementById('resultado')

// function buscarElemento(){
//     // let nome = document.getElementById('nome')

//     resultado.innerHTML = nome.value 
// }

function calculo(){
    let velocidade = Number(document.getElementById('velocidade').value);
    let distancia = Number(document.getElementById('distancia').value);
    

    document.querySelector('#result').innerHTML = `= ${(distancia/velocidade)}`
}

