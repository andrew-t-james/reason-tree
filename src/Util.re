[@bs.val] external __dirname: string = "";

let getAbsolutePath = (path: string) => {
  Node.Path.resolve(__dirname, path);
};

// let printDir = (dirPath: string) => {
//   let absolutePath = getAbsolutePath(dirPath);
//   let contentArray = Node.Fs.readdirSync(absolutePath);
//   let contentList = Array.to_list(contentArray);
//   List.iter((item: string) => Js.log("name: " ++ item), contentList);
// }

let printDir = (dirPath: string) => {
  dirPath
  |> getAbsolutePath
  |> Node.Fs.readdirSync
  |> Array.to_list
  |> List.iter((dir: string) => Js.log("name: " ++ dir));
};