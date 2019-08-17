# MAC-compiler-Android-source-code
踩坑日记，记录以供参考

我使用的是sdk10.13（命令行工具9.3）

https://developer.apple.com/download/more

配置必须环境：

终端安装findutils

$ brew install findutils

终端安装gnu-sed

$ brew install gnu-sed

你还需要安装coreutils：

$ brew install coreutils

编译需要导入环境变量：

export PATH=/usr/local/opt/coreutils/libexec/gnubin:/usr/local/opt/findutils/libexec/gnubin:/usr/local/opt/gnu-sed/libexec/gnubin:/usr/local/opt/curl/bin:$PATH

设置打开文件上限

#set the number of open files to be 1024 
ulimit -S -n 1024

#openssl

export PATH="/usr/local/opt/openssl/bin:$PATH"

#homebrew给出的环境变量法貌似没用，所以我们建立软链。

cd /usr/local/include

ln -s ../Cellar/openssl/1.0.2s/include/openssl .

cd /usr/local/lib

for i in ../Cellar/openssl/1.0.2s/lib/lib*; do ln -vs $i .; done

附：

xz 是一个使用 LZMA压缩算法的无损数据压缩文件格式，编译有些机型时会用的到。
前往此处下载并安装：http://macpkg.sourceforge.net

使用ccache

export USE_CCACHE=1

ccache -M 50G

启用ccache压缩

export CCACHE_COMPRESS=1

配置jack

export ANDROID_JACK_VM_ARGS="-Dfile.encoding=UTF-8 -XX:+TieredCompilation -Xmx4G"

