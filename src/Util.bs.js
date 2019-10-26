// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var Fs = require("fs");
var List = require("bs-platform/lib/js/list.js");
var Path = require("path");
var $$Array = require("bs-platform/lib/js/array.js");

function getAbsolutePath(path) {
  return Path.resolve(__dirname, path);
}

function printDir(dirPath) {
  var absolutePath = Path.resolve(__dirname, dirPath);
  var options = {
    withFileTypes: true
  };
  return List.iter((function (item) {
                var match = item.isDirectory();
                var prefix = match ? "?" : "?";
                console.log(prefix + (" " + item.name));
                return /* () */0;
              }), $$Array.to_list(Fs.readdirSync(absolutePath, options)));
}

exports.getAbsolutePath = getAbsolutePath;
exports.printDir = printDir;
/* fs Not a pure module */
