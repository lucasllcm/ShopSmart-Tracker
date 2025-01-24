import flet as ft

def main(page: ft.Page):
    page.title = "ShopSmart Tracker"
    page.add(ft.Text("Bem-vindo ao ShopSmart Tracker!"))

if __name__ == "__main__":
    ft.app(target=main)
