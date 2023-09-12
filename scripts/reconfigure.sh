cd ./subprojects/

list=("ECS" "FragLogger")
for f in ${list[*]};do
    if [ -d $f ]; then
        rm -rf $f
    fi
done
cd ..
./projectManager.sh build
