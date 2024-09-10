import "../assets/TablesSideBar.css";
import gearImage from "../assets/img/setting.png";

interface Props {
  items: string[];
  showStatus: boolean;
}

function TablesSideBar({ items, showStatus }: Props) {
  const openTable = () => {};
  const openTableSettings = () => {};

  return (
    <div className={showStatus ? "tables-sidebar active" : "tables-sidebar"}>
      <ul>
        {items.map((item) => (
          <li className="TablesSideBar-item" key={item} onClick={openTable}>
            {item}
            <div className="settings-button" onClick={openTableSettings}>
              <img src={gearImage} alt="settings" />
            </div>
          </li>
        ))}
        <li className="new-table-button">Create new Table</li>
      </ul>
    </div>
  );
}

export default TablesSideBar;
