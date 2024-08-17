import subprocess

# List of Python files to run sequentially with raw string literals
python_files = [
    r"D:\GitHub\All_Programming\Python\all notes python code\copy_files.py",
    r"D:\GitHub\All_Programming\Python\all notes python code\digit_remove.py",
    r"D:\GitHub\All_Programming\Python\all notes python code\remove(-,_).py",
    r"D:\GitHub\All_Programming\Python\all notes python code\remove_user_content.py",
    r"D:\GitHub\All_Programming\Python\all notes python code\remove_assitent.py"
]

# Run each Python file sequentially
for file in python_files:
    print(f"Running {file}...")
    result = subprocess.run(["python", file])
    if result.returncode != 0:
        print(f"Error running {file}: {result.stderr}")
    else:
        print(f"Completed {file}\n")
