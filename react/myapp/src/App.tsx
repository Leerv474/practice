//import ListGroup from "./components/ListGroup";
//function App() {
//  let items = ["New York", "Moscow", "Tokyo", "Soul", "London"];
//
//  const handleSelectItem = (item: string) => {console.log(item)};
//  return (
//    <div>
//      <ListGroup items={items} header={"Cities"} onSelectItem={handleSelectItem}/>
//    </div>
//  );
//}
//
//export default App;
//

import { useState } from "react";
import Alert from "./components/Alert";
import Button from "./components/Button";

function App() {
  const [alertVisible, setAlertVisibility] = useState(false);
  return (
    <div>
    { alertVisible && <Alert onClose={() => setAlertVisibility(false)}>My alert</Alert>}
    <Button onClick={() => {setAlertVisibility(true)}} color={"primary"}>MyButton</Button>
    </div>
  );
}

export default App;
