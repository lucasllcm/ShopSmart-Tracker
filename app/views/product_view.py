import flet as ft

def product_view(page: ft.Page):
    def on_save_click(e):
        product_name = name_field.value
        product_price = price_field.value
        page.snack_bar = ft.SnackBar(ft.Text(f"Produto {product_name} salvo!"))
        page.update()
    
    name_field = ft.TextField(label="Nome do Produto")
    price_field = ft.TextField(label="Preço Atual (R$)")
    
    page.title = "Cadastrar Produto"
    page.add(
        ft.AppBar(title=ft.Text("Cadastrar Produto")),
        name_field,
        price_field,
        ft.ElevatedButton("Salvar", on_click=on_save_click)
    )
