class Stiva {
  private: 
	std::stack<int> st; 
  	std::stack<int> maxVals;

  public:
    void Push(int x) {
      st.push(x);

      if (maxVals.empty() || x >= maxVals.top()) {
        maxVals.push(x);
      }
    }

  void Pop() {
    if (!st.empty()) {
      if (st.top() == maxVals.top()) {
        maxVals.pop();
      }
      st.pop();
    }
  }

  int Top() {
    return st.empty() ? -1 : st.top();
  }

  int Max() {
    return maxVals.empty() ? -1 : maxVals.top();
  }

  int Empty() {
    return st.empty();
  }
};