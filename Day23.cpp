void levelOrder(Node * root){
      //Write your code here
      if(!root) return;
      queue <Node*> q;
      q.push(root);
      while(!q.empty())
      {
          Node* node = q.front();
          cout<<node->data<<" ";
          q.pop();
          if (node->left)
            q.push(node->left);
          if (node->right)
            q.push(node->right);
               
             
          
      }
      
  
	}