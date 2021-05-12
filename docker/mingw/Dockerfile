FROM debian:stretch

WORKDIR /home/root

COPY ./* ./

RUN echo \
    deb http://mirrors.aliyun.com/debian/ stretch main non-free contrib\
    deb-src http://mirrors.aliyun.com/debian/ stretch main non-free contrib\
    deb http://mirrors.aliyun.com/debian-security stretch/updates main\
    deb-src http://mirrors.aliyun.com/debian-security stretch/updates main\
    deb http://mirrors.aliyun.com/debian/ stretch-updates main non-free contrib\
    deb-src http://mirrors.aliyun.com/debian/ stretch-updates main non-free contrib\
    deb http://mirrors.aliyun.com/debian/ stretch-backports main non-free contrib\
    deb-src http://mirrors.aliyun.com/debian/ stretch-backports main non-free contrib\
    > /etc/apt/sources.list

RUN apt-get update -y
RUN apt-get install mingw-w64 cmake build-essential libgtk-3-dev libwebkit2gtk-4.0-dev mingw-w64-tools -y
RUN PKG_CONFIG_PATH=/usr/x86_64-w64-mingw32/lib/pkgconfig cmake -DCMAKE_TOOLCHAIN_FILE=./mingw-w64-x86_64.cmake -B build -S .
RUN make 
CMD sleep 900000