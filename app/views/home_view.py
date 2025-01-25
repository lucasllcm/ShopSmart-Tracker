import flet as ft

def home_view(page: ft.Page):
    def on_add_product_click(e):
        page.go("/add-product")
    
    page.title = "ShopSmart Tracker"
    page.add(
        ft.AppBar(title=ft.Text("ShopSmart Tracker")),
        ft.ListView(expand=True, spacing=10, children=[
            ft.Text("Produto 1: R$ 50,00"),
            ft.Text("Produto 2: R$ 30,00"),
        ]),
        ft.ElevatedButton("Adicionar Produto", on_click=on_add_product_click)
    )

from app.database import get_products

def home_view(page: ft.Page):
    products = get_products()
    product_list = [
        ft.Text(f"{product[1]}: R$ {product[2]:.2f}") for product in products
    ]
    page.title = "ShopSmart Tracker"
    page.add(
        ft.AppBar(title=ft.Text("ShopSmart Tracker")),
        ft.ListView(expand=True, spacing=10, children=product_list),
        ft.ElevatedButton("Adicionar Produto", on_click=lambda _: page.go("/add-product"))
    )
