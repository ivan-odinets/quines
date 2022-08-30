class Quine {
public static void main(String args[]) {
String q="\"";String b="\\";String quine="class Quine {%npublic static void main(String args[]) {%nString q=%s%s%s%s;String b=%s%s%s%s;String quine=%s%s%s;%nSystem.out.printf(quine,q,b,q,q,q,b,b,q,q,quine,q);%n}%n}%n";
System.out.printf(quine,q,b,q,q,q,b,b,q,q,quine,q);
}
}
