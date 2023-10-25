const productImage = document.querySelector('.product-imagem').childNodes
const principal = document.querySelector('.principal')
const Mostruario = document.querySelector('.mostruario').childNodes

productImage.forEach(element => {
    element.addEventListener('click', (e) => {
        let clone = e.target.cloneNode(true)
        principal.innerHTML = ''
        principal.appendChild(clone)
    })
});

Mostruario.forEach(element => {
    element.addEventListener('click', (e) => {
        let clone = e.target.cloneNode(true)
        principal.innerHTML = ''
        principal.appendChild(clone)
    })
})