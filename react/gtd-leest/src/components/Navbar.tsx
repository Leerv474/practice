import "../assets/navbar.css";
import menuImage from "../assets/img/menu-bar.png";
import TablesSideBar from "./TablesSideBar";
import LoginWindow from "./LoginWindow";

import { useState } from "react";

function Navbar() {
  const [showSidebar, toggleSidebar] = useState(false);

  const [showLoginWindow, toggleLoginWindow] = useState(false);

  let items = ["Regular", "Studying", "Job", "Event"];


  return (
    <>
      <nav>
        <div className="toggleTables-button" onClick={() => toggleSidebar(!showSidebar)}>
          <img src={menuImage} alt="three lines" />
          <p>Tables</p>
        </div>
        <p>GTD LeeST</p>
        <div className="logIn-button" onClick={() => {toggleLoginWindow(true)}}>
          LogIn
        </div>
      </nav>
      <TablesSideBar showStatus={showSidebar} items={items}></TablesSideBar>
      {showLoginWindow && (<LoginWindow useShowLoginWindow={() => toggleLoginWindow(false)}></LoginWindow>)}
    </>
  );
}

export default Navbar;
