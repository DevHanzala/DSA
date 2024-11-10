int main() {
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    st.pop();
    cout << st.peek() << endl;
    return 0;
}
