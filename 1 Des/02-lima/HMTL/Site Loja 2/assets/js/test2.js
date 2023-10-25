const productTamanho = document.querySelectorAll('.product-tamanho')

productTamanho.forEach(element => {
    let buttons = element.childNodes

    buttons.forEach(e => {
        e.addEventListener('click', (e) => {
            e.target.classList.toggle('active')
        })
    })
})