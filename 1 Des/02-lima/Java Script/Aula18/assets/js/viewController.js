const formPessoa = document.querySelector('#formPessoa');
const pessoas = [];

formPessoa.addEventListener('submit', (e) => {
    e.preventDefault();
    pessoas.push(new Pagamento(formPessoa.nome.value, formPessoa.salario.value));
    criarCard();
})

function criarCard(){
    const cards = document.querySelector('.cards');
    let card = document.querySelector('.card');
    cards.innerHTML = '';
    cards.appendChild(card);
    
    pessoas.forEach(pessoa => {
        let cardNew = card.cloneNode(true);
        cardNew.classList.remove('model');
        // cardNew.querySelector("#nomeValor").innerHTL = pessoa.nome;
        // cardNew.querySelector("#salarioValor").innerHTML = `<p>Salário</p><p>R$ ${pessoa.salario}</p>`;
        // cardNew.querySelector("#salarioBase").innerHTML = `<p>Salário Base</p><p>R$ ${pessoa.salarioBase}</p>`;
        // cardNew.querySelector("#salarioLiquido").innerHTML = `<p>Salário Liquido</p><p>R$ ${pessoa.salarioLiquido}</p>`;
        // cards.appendChild(cardNew);
    })
}
    function remover (e) {
        e.parentNode.parentNode.remove()
        pessoas.splice(e,1)
    }
 