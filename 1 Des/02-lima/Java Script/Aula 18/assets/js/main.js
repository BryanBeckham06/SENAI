class Descontos {
    constructor(nome, salario) {
      this.nome = nome;
      this.salario = salario;
      this.inss = this.inss().toFixed(2);
      this.salBase = (this.salario - this.inss).toFixed(2);
      this.irrf = this.irrf().toFixed(2);
      this.salLiquido = (this.salBase - this.irrf).toFixed(2);
    }
  
    inss() {
      if (this.salario < 1320.01) {
        return (this.salario * 7.5) / 100;
      } else if (this.salario < 2571.3) {
        return (this.salario * 9) / 100;
      } else if (this.salario < 3856.95) {
        return (this.salario * 12) / 100;
      } else if (this.salario < 75070.49) {
        return (this.salario * 14) / 100;
      } else {
        return 1051.05;
      }
    }
  
    irrf() {
      if (this.salario < 1903.99) {
        return 0;
      } else if (this.salario < 2826.66) {
        return (this.salario * 7.5) / 100 - 142.8;
      } else if (this.salario < 3751.06) {
        return (this.salario * 15) / 100 - 354.8;
      } else if (this.salario < 4664.69) {
        return (this.salario * 22.5) / 100 - 636.13;
      } else {
        return (this.salario * 27.5) / 100 - 869.36;
      }
    }
  
    showHTML() {
      let str = `<h2 id="nome">${this.nome}</h2>`;
      str += `<hr>`;
      str += `<p id="sal">Salário:</p><p>${this.salario}</p>`;
      str += `<p id="inss">INSS:</p><p>${this.inss}</p>`;
      str += `<p id="salB">Salário Base:</p><p>${this.salBase}</p>`;
      str += `<p id="irrf">IRRF:</p><p>${this.irrf}</p>`;
      str += `<p id="salL">Salário Líquido:</p><p>${this.salLiquido}</p>`;
      return str;
    }
  }
  
  function funcionario(){
    let nome = document.querySelector("#inputNome").value;
    let salario = Number(document.querySelector("#inputSalario").value);
  
    const lista = [];
    lista.push(new Descontos(nome, salario));
  
    const main = document.getElementById("pgto");
    lista.forEach((folhas) => {
      const div = document.createElement("div");
      div.classList.add("card");
      div.innerHTML = folhas.showHTML();
      main.appendChild(div);
    })
  
    document.querySelector("#inputNome").value = '';
    document.querySelector("#inputSalario").value = '';
  }

    