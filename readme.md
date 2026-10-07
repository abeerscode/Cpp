# Only once for the first commit in a new repository

1. `git init` --> Initialize Git (if not already)
2. `git add .` --> Add all files in the folder
3. `git commit -m "Initial commit"` --> Commit your files
4. `git branch -M main` --> Rename local branch to `main`
5. `git remote add origin https://github.com/githubUsername/RepoName.git` --> Add GitHub remote
6. `git push -u origin main` --> Push code to GitHub

# Commit Push Pull

1. `git remote -v` --> Check linked Repository
2. `git status` --> Check current branch and file status
3. `git add .` --> Add changes
4. `git commit -m "comments"` --> Commit changes
5. `git push origin main` --> Push `main` branch
6. `git pull` --> Get latest changes from GitHub

# Branch

1. git branch --> Show all local branches
2. git branch -a --> Show local and remote branches
3. git switch main --> Switch to main
4. git pull origin main --> Get the latest main from GitHub
5. git switch -c branchname --> Create and switch to a new branch
6. git push -u origin branchname --> First push of a new branch
7. git fetch origin --> Get latest branch information from GitHub
8. git switch branchname --> Switch to an existing branch
9. git push origin branchname --> Push a specific branch
10. git push --> Push current branch (after -u is se

# Delete Folder & File

1. `git rm filename` --> Delete file from Git
2. `git rm -r foldername` --> Delete folder from Git
3. `git rm --cached filename` --> Delete from Git, keep locally
4. `git rm -r --cached foldername` --> Delete from Git, keep locally
5. `git commit -m "Delete ..."` --> Commit deletion

# Clone a GitHub Repository

1. `git clone https://github.com/githubUsername/RepoName.git` --> Download the repo and set up Git locally
2. `cd RepoName` --> Move into the cloned folder
3. `git pull` --> Update local copy with latest changes from GitHub

# Run a C++ Program

1. `g++ -g filename.cpp -o filename`
2. `./filename`
