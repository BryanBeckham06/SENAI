
function indiceSalario(){

    let nome = document.getElementById('nome')
    let salario = Number(document.getElementById('salario').value);
    let indice = Number(document.getElementById('indice').value);
    
    resultado.innerHTML = nome.value 
    document.querySelector('#result').innerHTML = `= ${nome} ${(salario * indice/100) + salario}`
}

