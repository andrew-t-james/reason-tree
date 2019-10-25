[@bs.val] external __dirname: string = "";

let getAbsolutePath = (path: string) => {
  Node.Path.resolve(__dirname, path);
};