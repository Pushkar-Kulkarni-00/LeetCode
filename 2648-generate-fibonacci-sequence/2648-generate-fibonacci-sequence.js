/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    let a=0;
    let b=1;
    while(true){
        yield a;
        let t=a;
        a=b;
        b=t+b;
    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */