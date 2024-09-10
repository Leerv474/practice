import "../assets/LoginWindow.css";
import { useState } from "react";

interface Props {
  useShowLoginWindow: () => void;
}

function LoginWindow({ useShowLoginWindow }: Props) {
  const [toggleLogin, toggleMenu] = useState(true);

  const HandleClose = () => {
    useShowLoginWindow();
  };

  return (
    <div className={"outer-space active"}>
      <div className="close-button" onClick={HandleClose}>
      </div>
      <div className="window">
        <div className="switch-menu">
          <div
            className={
              toggleLogin
                ? "selection-box login-active"
                : "selection-box register-active"
            }
          ></div>
          <div className="login-option" onClick={() => toggleMenu(true)}>
            Login
          </div>
          <div className="register-option" onClick={() => toggleMenu(false)}>
            Register
          </div>
        </div>
        {toggleLogin && (
          <div className="login-menu">
            <p>login</p>
            <input type="text" />
            <p>password</p>
            <input type="password" />
            <div className="login-button" onClick={() => {}}>
              log in
            </div>
            {/* TODO: login handle*/}
          </div>
        )}
        {!toggleLogin && (
          <div className="register-menu">
            <p>login</p>
            <input type="text" />
            <p>phone number</p>
            <input type="text" placeholder="+7 998 ... .. .."/>
            <p>password</p>
            <input type="password" />
            <p>repeat password</p>
            <input type="password" />
            <div className="register-button" onClick={() => {}}>
              register
            </div>
            {/* handle register*/}
          </div>
        )}
      </div>
    </div>
  );
}

export default LoginWindow;
