# Wrap example

In order to use your own project as a Meson subproject, you have a couple of ways to go about it.
In this example we explore the use of a `wrap-git` file, that depends on your project having a public git repository.

## Why would you want this?
Since both projects are yours, you may have different development plans for each project and you don't want to mess around using git submodules.

## How to.
> Remember that your project should already be configured to use the Meson build system in order for this to work.

We used the same `ExternalLib` project example as in the `#subprojec-example`, and created a repo for it.
After you have your public git repo's url, you can create a `subprojects` directory _(with this exact name)_ in your project's root directory.

So, you'll have something like this:
```
sample-project\
    src\
    include\
    subprojects\
    meson.build
```

You will need to create a `.wrap` file inside your `subprojects` directory. 
The name you give this file will be the name of the directory where it will be downloaded.

In this case, it will be `ExternalLib.wrap` and it will have the 3 following lines:
```ini
[wrap-git]
url = https://github.com/diego-gt/meson-wrap-test.git
revision = head
```

This file follows the `.ini` file structure. It has 2 required fields:
* url: the public url for your project's git repository.
* revision: revision of the repo to check out. Must be valid to the `git checkout` or your-VCS-equivalent command, or `head` if you want to follow the default branch.
You can check for options on [Meson Wrap Manual](https://mesonbuild.com/Wrap-dependency-system-manual.html#specific-to-vcsbased-wraps)

With that, you can setup your project with `meson setup <build-dir>` and Meson will get your project downloaded, and you'll be able to use it as a dependency.
