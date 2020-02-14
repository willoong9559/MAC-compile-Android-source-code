# MAC-compiler-Android-source-code
踩坑日记，记录以供参考

我使用的是sdk10.14

https://developer.apple.com/download/more

# 配置必须环境：

终端安装findutils

$ brew install findutils

终端安装gnu-sed

$ brew install gnu-sed

# 编译需要导入环境变量：

export PATH=/usr/local/opt/findutils/libexec/gnubin:/usr/local/opt/gnu-sed/libexec/gnubin:$PATH

设置打开文件上限

#set the number of open files to be 1024 
ulimit -S -n 1024

# homebrew给出的环境变量法貌似没用，所以我们建立软链。

cd /usr/local/include

ln -s ../Cellar/openssl/1.0.2s/include/openssl .

cd /usr/local/lib

for i in ../Cellar/openssl/1.0.2s/lib/lib*; do ln -vs $i .; done

# 增加头文件elf.h
在我的gist星标里

优化编译

附：

使用ccache

export USE_CCACHE=1

ccache -M 50G

配置ccache路径

export CCACHE_DIR=/<path_of_your_choice>/.ccache

启用ccache压缩

export CCACHE_COMPRESS=1

