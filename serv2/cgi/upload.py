#!/usr/bin/python3
import cgi
import sys
import os

form = cgi.FieldStorage()
root = sys.argv[1]


fileitem = form["file"]


if fileitem.filename:
	fn = os.path.basename(fileitem.filename)
	open(root + "/uploads/" + fn, "wb").write(fileitem.file.read())
	message = "The file " + fn + " was uploaded successfully"
else:
	message = "No file was uploaded"


print("Content-Type: text/html\n")
print("<html>")
print("<body>")
print("<h1 style=\"color:black;\">Upload page</h1>")
print("<p style=\"color:black;\">" + message)
print("<h3 style=\"color:black;\" >Come back to <a href=\"../upload.html\" style=\"color:blue;\"> Upload </a></h3>")
print("</p>")
print("<body style=\"background-color:#bbbbbb;\">")
print("</body>")
print("</html>")