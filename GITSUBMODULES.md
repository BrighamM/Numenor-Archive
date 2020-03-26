# Working With Submodules

For more information on submodules please see: https://stackoverflow.com/questions/3796927/how-to-git-clone-including-submodules

To learn about gitsubmodules and how they are used please watch:
https://www.youtube.com/watch?v=UQvXst5I41I
and
https://www.youtube.com/watch?v=w4AyLtIEibo

To add a submodule to your project:

```bash
git submodule add <submodule_name> <desired_directory_name>
```

To commit the change:
```bash
git commit -m "Add <submodule_name>"
```

To update a submodule with a change you do:

```bash
git add submodule-name
git commit -m "Update reference to submodule-name submodule"
```

**Never do a push on a top-level project without having pushed the modified submodule project.**

```bash
git submodule update --init # fetch and merge for submodules
```

```bash
git submodule update # fetch and merge for all submodules
```

```bash
git submodule status

###HASH###  this means that you are not checked out to what the super project says you should be

git submodule update
####ORIGINALHASH####

git submodule foreach git pull origin master
