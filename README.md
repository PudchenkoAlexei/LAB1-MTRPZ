# LAB1-MTRPZ

Цей код є простим програмним інструментом для обробки файлів у форматі Markdown та перетворення їх у HTML.

# Інструкція

У Visual Studio створити проект, обрати на с++ Сonsole application та скопіювати код.

Після того як ви скопіювали код та скомпілвали, вам треба створити два файли. Один в Markdown(.md) інший у форматі HTML(.html).
Назва та місце знаходження не мають значення але рекомендую створити просто на диску щоб шлах був простий наприклад: C:\input.md

Після створення файлів та компіляції ви відкриваєте командний рядок,
переходите в каталог де знаходиться виконавчий файл(.exe) і пишите:Mark.exe \шлях\до\файлу\назва файлу 

приклад:C:\Users\lesha\OneDrive\Рабочий стол\Mark\x64\Debug>Mark.exe C:\input.md
активуєте і отримаєте результат у консолі.

Якщо ж ви хочете записати у html файл то вам треба додати --out \шлях\до\файлу\назва файлу 

приклад:C:\Users\lesha\OneDrive\Рабочий стол\Mark\x64\Debug>mark.exe C:\input.md --out C:\output.html
активуєте і все що було у .md запишеться у html файл