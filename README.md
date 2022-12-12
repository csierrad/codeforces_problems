# Codeforces Problems

Resolved problems from [Codeforces Website](https://codeforces.com/).

Each directory correspond to a different difficulty category.

At the top of each problem it's shown the problem's name, the difficulty and it's link to the codeforces page in that order.

## cdf_script

Script done the to automate the creation and to reorder automatically the problems once they are finished.

Files included on the .cdf_script folder:
  - `cdf` : bash script explained below.
  - `existing_difficulties` : includes all difficulties folders already created.
  - `c_template.c` : C template file with the basic structure.

In case you want to use the same bash script, you only need to copy the `cdf` bash file into your directory and run the `cdf init` command on the terminal.
As it moves the cdf file to a new .cdf_script folder I recommend to create an alias on the .bashrc file as shown below:
```bash
alias cdf="./.cdf_script/cdf"
```

There are 3 commands created at the moment:
  - `cdf init` : creates the file structure needed to use the cdf_script.
  - `cdf new file_name` : creates a new C file named file_name.c like [this](.cdf_script/c_template.c). If the file_name parameter is not provided, the file created will be named c_template.c
  - `cdf order` : orders all the .c files that are in the root folder. If it finds a new difficulty asks if a new folder wants to be created.
