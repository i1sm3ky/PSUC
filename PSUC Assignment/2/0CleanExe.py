import os

for file in os.listdir(os.getcwd()):
    if file[-2:] not in [".c", "py", "df"]:
        os.remove(file)