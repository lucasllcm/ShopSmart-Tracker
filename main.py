import flet as ft
from app.views.home_view import home_view
from app.views.product_view import product_view

def main(page: ft.Page):
    # Configurações iniciais da página
    page.title = "ShopSmart Tracker"
    page.theme_mode = ft.ThemeMode.LIGHT
    page.navigation_bar = None  # Adicione um navigation bar se necessário
    page.window_width = 400
    page.window_height = 700

    # Rotas do aplicativo
    def route_change(route):
        page.views.clear()  # Limpa as telas atuais antes de adicionar a nova
        if page.route == "/":
            page.views.append(ft.View("/", controls=[home_view(page)]))
        elif page.route == "/add-product":
            page.views.append(ft.View("/add-product", controls=[product_view(page)]))
        else:
            page.views.append(ft.View("/404", controls=[ft.Text("Página não encontrada!")]))
        page.update()

    # Função para voltar entre telas
    def view_pop(view):
        page.views.pop()  # Remove a última view ao pressionar "voltar"
        top_view = page.views[-1] if len(page.views) > 0 else None
        if top_view:
            page.go(top_view.route)
        page.update()

    # Configuração das rotas
    page.on_route_change = route_change
    page.on_view_pop = view_pop
    page.go("/")  # Define a rota inicial como "/"

# Inicializa o aplicativo
if __name__ == "__main__":
    ft.app(target=main)
