# Text-Processor
Building a simple text file processor. The app will be able to perform various processes on text file. Some of these include:
1. Counting the number of words in the file
2. Counting the number of letters
3. converting the text file into upper case
4. Converting the text file into lower case
5.etc

# Getting Involved

## Build the code
In order to do development you need a local copy of the source code. All code is kept in git. Cloning the source code is dependent on your operating system though simple git clone does the trick.
```
git clone https://github.com/adesolasamuel/Text-Processor.git
```
With this you have the source on your local machine. Get ready to start contributing. Build the code by leveraging on the CMakeLists.txt file, you can find help on how to work or build with CMake files with little google searches. CMake should configure the source code to work with your local development environment.

## Prepare to submit patches
Once you have successfully compiled Text Processor you are ready to submit patches. We use Git to keep track of patches, so you need to create an account there. Make sure you only push relevant files while submitting your patches. Your local environment might create some addtional files for you after running CMake,we don't need this in the repository, always use **git add [files]** to add only the neccessary files.

## Find your first bug to solve
Congratulations, you have reached the interesting part.

Solving the first bug involves learning new tools and ways, therefore we have identified some bugs called Issues. We use Github issues to keep track of reported bugs.

The issues are real bugs, but the core developers have added source code pointers and sometimes textual help instead of simply solving them, to make it easier for you to solve the bug. Once you have selected a bug to solve, please do not forget to assign it in the issues to yourself, so others can see you are working on it.

## Solving a bug
Some practical advice, based on experience, which we recommend that you follow is:

* Never make changes to your copy of master - create a branch instead.
* Keep a separate branch for each bug, and do not delete the branch until the bug-fix is merged.
* follow the Code Style (such as variable naming schemes, etc.).
* If you create new files, please add them to the CMakeLists.txt.
* Update master before starting on a new bug (and run build to confirm it compiles cleanly before you make any changes).
* not submit patches that depend on each other, unless being told to do so. Doing so will make your patch incapable of being merged.

**Suggested Workflow**

**1. Update Master**

Make sure your master is updated and works. If your master is too outdated, you run the risk of not being able to merge your patch.
As a rule of thumb, use the commands below if:

* your master is more than a week old.
* your new bug-fix depends on work that just got merged.

```
git pull
```

Then build the code locally using the command line or your development software

**2. Work in a branch**

You might be asked later to make changes to your patch, and if you have created and worked in a separate branch that will be very easy. Please use a new branch (from origin/main) for every bug you work on, once the patch has been merged you can delete the branch.

```
git checkout -b test1 origin/main
```
Replace **test1** with your preferred name.

**3. Solve the bug**

Identify the problem, correct the code, generate and test a version.

**4. Submit the patch**
After making your changes, stage the affected files and commit them locally using git commit. It is recommended that your commit messages look like:

```
<short developer description of change, not just the bug title>
   <empty line>
   <description of what the patch does, the more words the better others understand it later>
 ```

Then you can create a pull request using git push.

## What if automatic build fails or you need to update your patch?

**Updating a patch**
Checkout your branch,
```
git checkout test1
```

Once you are ready to commit again it is important you use **--amend**
```
git commit --amend -a
```

Upload the new patch set to git

```
git push
```

## Congratulations
You have successfully made a change to one of the open-source packages in the world.

Continue to make patches, and you will soon be a committer yourself.
