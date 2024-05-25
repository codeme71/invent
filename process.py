// codeme71 2024 
// please donate in SOL: EuRyXtxFq2NSwCRFxjgGRzYWN1xv72FGKSUF3TvVy6yu

import cgi, cgitb, subprocess
cgitb.enable()

form = cgi.FieldStorage()

# Получаем число из формы
number = form.getvalue('number')

# Выполняем вашу пользовательскую программу
process = subprocess.run(['/usr/bin/invent', number], capture_output=True, text=True)
output = process.stdout

print("Content-type:text/html\r\n\r\n")
print(f"<p>Результат: {output}</p>")
