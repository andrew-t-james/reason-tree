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
  let absolutePath = getAbsolutePath(dirPath);
  let options = Fs.readdirSyncOptions(~withFileTypes=true, ());

  Fs.readdirSync(absolutePath, options)
  |> Array.to_list
  |> List.iter((item: Fs.dirent) => {
       let prefix = item##isDirectory() ? {js|?|js} : {js|?|js};
       Js.log(prefix ++ " " ++ item##name);
     });
};