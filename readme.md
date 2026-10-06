# GitHub & Git Commands

## 1. First Commit in a New Repository — Only Once

1. `git init` → Initialize Git in the folder (if not already)
2. `git add .` → Add all files in the folder
3. `git commit -m "Initial commit"` → Commit your files
4. `git branch -M main` → Rename the local branch to `main`
5. `git remote add origin https://github.com/githubUsername/RepoName.git` → Add your GitHub remote
6. `git push -u origin main` → Push your code to GitHub

---

# 2. Check Repository & Remote

1. `git remote -v` → Check the linked GitHub repository
2. `git status` → Check the current status of files and current branch
3. `git branch` → Show all local branches
4. `git branch -a` → Show local and remote branches

### Important

In `git branch`:

```text
* main
  register
```

The `*` shows the **branch I am currently on**.

---

# 3. Commit, Push & Pull

1. `git add .` → Add all changed files
2. `git commit -m "comments"` → Save changes in a commit
3. `git push origin main` → Push the `main` branch to GitHub
4. `git pull` → Get the latest changes from GitHub

---

# 4. Branches

### Create a New Branch

`git branch branchname` → Create a new branch

Example:

```bash
git branch register
```

This creates the `register` branch but does **not** switch to it.

### Switch to Another Branch

`git switch branchname` → Switch to an existing branch

Example:

```bash
git switch register
```

### Create and Switch to a New Branch at the Same Time

`git switch -c branchname` → Create a new branch and immediately switch to it

Example:

```bash
git switch -c register
```

### Check Which Branch I Am On

```bash
git branch
```

Example:

```text
  main
* register
```

This means I am currently working on `register`.

---

# 5. Push a Branch to GitHub

General format:

```bash
git push origin branchname
```

Example:

```bash
git push origin register
```

This means:

**Local `register` branch → GitHub `register` branch**

For the first push of a new branch, use:

```bash
git push -u origin register
```

After that, I can usually use:

```bash
git push
```

### Important

```bash
git push origin main
```

means **push `main` specifically**.

It does NOT mean "push whichever branch I am currently on."

If I am on:

```text
* register
```

then:

```bash
git push origin register
```

---

# 6. Typical Branch Workflow

Example: I want to create a register page.

### Step 1 — Create and switch to the branch

```bash
git switch -c register
```

### Step 2 — Work on the project

Make my code changes.

### Step 3 — Check my branch

```bash
git branch
```

Example:

```text
  main
* register
```

### Step 4 — Add changes

```bash
git add .
```

### Step 5 — Commit changes

```bash
git commit -m "Add register page"
```

### Step 6 — Push the branch

```bash
git push -u origin register
```

---

# 7. Important Branch Idea

A branch is basically a separate line of work.

Example:

```text
main
  |
  |------ register
  |          |
  |          |--- register page changes
  |
```

I can work on `register` without directly changing `main`.

My current location matters:

```bash
git branch
```

The branch with `*` is where I am currently working.

---

# 8. Delete Folder & File

1. `git rm filename` → Delete the file from Git and locally
2. `git rm -r foldername` → Delete the folder from Git and locally
3. `git rm --cached filename` → Remove the file from Git but keep it locally
4. `git rm -r --cached foldername` → Remove the folder from Git but keep it locally
5. `git commit -m "Delete ..."` → Commit the deletion

---

# 9. Clone a GitHub Repository

1. `git clone https://github.com/githubUsername/RepoName.git` → Download the repository and set up Git locally
2. `cd RepoName` → Move into the cloned folder
3. `git pull` → Update the local copy with the latest changes from GitHub

---

# 10. Run a C++ Program

1. `g++ -g filename.cpp -o filename` → Compile the C++ program with debugging information
2. `./filename` → Run the compiled program

---

# 11. Most Useful Commands to Remember

```bash
git status
git branch
git switch branchname
git switch -c branchname
git add .
git commit -m "message"
git push
git pull
```

### Basic Mental Model

```text
Working Folder
      ↓
  git add .
      ↓
    Staging
      ↓
git commit -m "message"
      ↓
 Local Repository
      ↓
    git push
      ↓
     GitHub
```
