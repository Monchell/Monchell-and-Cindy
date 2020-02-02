## Git使用

* 2020.2.2

  * 主要工作

    * git前两章在命令行的使用，用ui辅助学习。
    * 绘制详细的思维导图。
    * 顺便学一下md的格式

  * 遇到的问题

    * your branch is ahead of  origin/master by 2 commit

      * 介绍：本地提交超前了远程分支

      * 解决方法 

        ```c++
        $git push origin  //推上去
        //或者 git reset --hard origin/master 回远端
        ```

    * MINGW64中文显示转义的问题

      * 解决方法

        ``` c++
        $git config core.quotepath false
        ```

        取消默认转义即可

    * 修改已提交的代码的commit注释

      * 只修改最近一次注释

        ``` c++
        git commit --amend -m"message"
        ```

      * 修改之前的注释

        ```c
        $git rebase -i HEAD~x
        //显示前x次的注释
        ```

        之后会出现

        ```c
        pick XXXXXXX
        pick XXXXXXX
        ```

        把pick修改成edit

        ```c
        edit XXXXXXX
        pick XXXXXXX    
        ```

        然后退出编辑模式

        在用 `git log` 然后`git commit --amend`

        `git rebase --continue`即可在本地端修改

        如果要到网络则需要`push -f`(慎重)