import express from "express";
import bodyParser from "body-parser";
const app = express();
const port = 3000;
app.use(bodyParser.urlencoded({ extended: true }));
app.use('/public', express.static('public'));

let new_items=[];
app.get("/", (req, res) => {
    let options = { weekday: 'long', year: 'numeric', month: 'long', day: 'numeric' };
    let today = new Date();
    let day=(today.toLocaleDateString("en-US", options)); // Saturday, September 17, 2016
    // res.send(day);
    res.render("index.ejs",{
        kind_of_day:day ,
        new_task:new_items
    });
})

app.post("/",(req,res)=>{
    let new_item = req.body.newItem;
    new_items.push(new_item);
    res.redirect('/');
   
})

app.listen(port, () => {
    console.log(`Server running on port ${port}`);
});