interface Props {
  children: string;
  color?: 'primary' | 'secondary' | 'danger';
  onClick: () => void;
}

const Button = ({ children, color = "primary", onClick }: Props) => {
  return (
    <button className={`btn btn-${color}`} type="button" onClick={onClick}>
      {children}
    </button>
  );
};

export default Button;
